
# mikrotik-pings

Mikrotik RouterOS ping like commands

<pre>

make

./ping 200.160.2.3 -c 6

 SEQ HOST                                      SIZE TTL TIME  STATUS
   1 200.160.2.3                                 64  53 23.2   echo reply
   2 200.160.2.3                                 64  53 24.0   echo reply
   3 200.160.2.3                                 64  53 23.3   echo reply
   4 200.160.2.3                                 64  53 23.6   echo reply
   5 200.160.2.3                                 64  53 23.1   echo reply
   6 200.160.2.3                                 64  53 23.1   echo reply
     sent=6 received=6 packet-loss=0 min-rtt=23.159 avg-rtt=23.433 max-rtt=24.037


./ping6 2804:49c:3103:401:ffff:ffff:ffff:1 -c 6

 SEQ HOST                                      SIZE TTL TIME  STATUS
   1 2804:49c:3103:401:ffff:ffff:ffff:1        1408  54 61.5   echo reply
   2 2804:49c:3103:401:ffff:ffff:ffff:1        1408  54 53.2   echo reply
   3 2804:49c:3103:401:ffff:ffff:ffff:1        1408  54 54.2   echo reply
   4 2804:49c:3103:401:ffff:ffff:ffff:1        1408  54 60.6   echo reply
   5 2804:49c:3103:401:ffff:ffff:ffff:1        1408  54 53.8   echo reply
   6 2804:49c:3103:401:ffff:ffff:ffff:1        1408  54 52.6   echo reply
     sent=6 received=6 packet-loss=0 min-rtt=52.617 avg-rtt=56.023 max-rtt=61.531

</pre>
