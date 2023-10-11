
export const useEncyption = (jwtPayload) => {
    const secret_key = 'YOUR_SECRET_KEY';

    const cipher = crypto.createCipheriv(algorithm, securityKey, initVector);

    let encrypted_token = cipher.update(jwtPayload, "utf-8", "hex");

    encrypted_token += cipher.final("hex");
    
    return encrypted_token;
};

export const useDecryption = (encrypted_token) => {
    const secret_key = 'YOUR_SECRET_KEY';

    const decipher = crypto.createDecipheriv(algorithm, securityKey, initVector);

    let decrypted_token = decipher.update(encrypted_token, "hex", "utf-8");

    decrypted_token += decipher.final("utf-8");
    
    return decrypted_token;
};
