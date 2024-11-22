from fastapi import FastAPI # 라이브러리 호출
app = FastAPI()  # 인스턴스 생성
@app.get("/") # get method로 '/'에 해당하는 생성
def root():
    return {'Hello':'World!'}   
