tar czvf /tmp/sasl.tgz SASL.h Tests Package.swift module.modulemap
scp /tmp/sasl.tgz 192.168.56.11:/tmp
ssh 192.168.56.11 "cd /tmp;rm -rf sasl;mkdir sasl;cd sasl;tar xzvf ../sasl.tgz;swift build;swift test"
