• Standardize mask patterns for constraint-based brute force.
  Before designing a mask attack, explicitly map character constraints from the challenge guidance (e.g., 'four lowercase letters' → ?l?l?l?l). Test the mask syntax on a single hash first to confirm keyspace size is reasonable.

• Leverage wordlist filtering for targeted dictionary attacks.
  When a challenge hints at password length or character constraints, pre-filter rockyou.txt using grep (e.g., `grep -E ^.{4}$` for four-character passwords) to reduce runtime and focus on high-probability candidates.

• Document plaintext-to-mode mappings as a reference table.
  Create a quick reference linking hash types (MD5, SHA256, bcrypt, NTLM, HMAC-SHA1, sha512crypt) to their hashcat modes. Consult it before every run to eliminate mode-selection errors.
