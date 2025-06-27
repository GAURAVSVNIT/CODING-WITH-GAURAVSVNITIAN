from pydantic import BaseModel, field_validator,model_validator, computed_field


class User(BaseModel):
    username:str

    @field_validator("username")
    def usernmae_length(cls,v):
        if len(v) < 4:
            raise ValueError("Invalid")
        
        return v
    
class SignupData(BaseModel):
    password:str
    confirm_password: str

    @model_validator(mode="after")
    def password_match(cls,values):
        if values.password != values.confirm_password:
            raise ValueError("Password Do Not match")
        return values
    
    

