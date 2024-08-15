rule Malware_Detection {
    meta:
        description = "Detects malware based on specific strings and behaviors"
        author = "Pemba Tshering Sherpa"
        last_modified = "2024-08-01"

    strings:
        $s1 = "Desktop\\cosmo.jpeg"
        $s2 = "Authorization"
        $s3 = "httpclient.nim"
        $s4 = "Content-Length"
        $s5 = "Transfer-Encoding"
        $s6 = "Nim httpclient/1.6.2"

    condition:
        any of ($s*)
}
