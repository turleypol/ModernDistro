// Shinni's web page functions

function OpenWebSite( who, url )
  var packet := "A5" + WordPacket( Len( url ) + 4 );
  foreach ascii_code in CAscZ( url )
    packet := packet + BytePacket( ascii_code );
  endforeach
  SendPacket( who, packet + "00" );
endfunction

function BytePacket( byte )
  var paket := Hex( byte );
  paket := "00" + paket[3, Len( paket ) - 2];
  return ( paket[Len( paket ) - 1, 2] );
endfunction

function WordPacket( word )
  var paket := Hex( word );
  paket := "0000" + paket[3, Len( paket ) - 2];
  return ( paket[Len( paket ) - 3, 4] );
endfunction

function DoubleWordPacket( doubleword )
  var paket := Hex( doubleword );
  paket := "00000000" + paket[3, Len( paket ) - 2];
  return ( paket[Len( paket ) - 7, 8] );
endfunction