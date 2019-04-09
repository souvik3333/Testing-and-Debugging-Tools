#include <bits/stdc++.h>
using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t foo_len( const char *s )
{
  return strlen( s );
}

int main( int argc, char *argv[] )
{
  const char *a = NULL;

  printf( "size of a = %lu\n", foo_len(a) );

  exit( 0 );
}