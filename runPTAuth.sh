#!/bin/bash 

PIIP=ptauth
PIUSER=ubuntu
PTAUTHPATH=/home/ubuntu/ptauth

#			******************************** Toy examples  ******************************** 
docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./runtoyexample.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/  #scp to Pi4

#			******************************** SPEC 2006  ******************************** 
# docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./470.lbm.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/470.lbm  # scp to Pi4

# docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./429.mcf.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/429.mcf  #scp to Pi4

# docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./462.libquantum.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/462.libquantum  #scp to Pi4

# docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./401.bzip2.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/401.bzip2  #scp to Pi4

# docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./458.sjeng.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/458.sjeng  #scp to Pi4

# docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./445.gobmk.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/445.gobmk  #scp to Pi4

# docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./464.h264ref.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/464.h264ref  #scp to Pi4

# docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./433.milc.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/433.milc  #scp to Pi4

# docker run -u=$UID:$(id -g $USER) --rm -it -v  $PWD/pass:/pass rezamirz/ptauth_image /bin/bash -c "cd pass;./482.sphinx3.sh"
# scp pass/stest.arm.elf $PIUSER@$PIIP:$PTAUTHPATH/482.sphinx3  #scp to Pi4
