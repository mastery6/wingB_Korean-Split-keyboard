# WingB_Korean-Split-keyboard
![IMG_2215](https://user-images.githubusercontent.com/91782246/135714224-32667858-1275-41bc-b0fe-18ebc63cbfb1.JPG)


|준비물|설명|링크
|-----|-----|-----|
|3D 프린팅 출력 케이스|메이커스페이스➡️|https://www.makeall.com/reservation/map.php|
|아두이노 프로 마이크로 2개|납땜 된거 추천|https://smartstore.naver.com/codingbird/products/4964838948|
|5핀 to USB|집에 하나쯤은 있으시죠..?|
|PJ325(오디오 커넥터) 2개|다른 TRS or TRRS 커넥터 호환가능|https://www.devicemart.co.kr/goods/view?no=2679|
|3.5mm aux 케이블|1m 이상 추천|
|다이오드(1N4148) 64개||https://www.devicemart.co.kr/goods/view?no=25|
|M3 접시머리 머신스크류 10mm (볼트) 14개||https://www.devicemart.co.kr/goods/view?no=34782|
|M3 인서트 너트 14개||https://www.devicemart.co.kr/goods/view?no=1067969|
|하네스 케이블 10핀 or 12핀 4개|위쪽 두개는 사용하지 않아 10핀도 가능합니다|https://www.devicemart.co.kr/goods/view?no=10894393|
|스위치 64개|게이트론, 카일, 체리 등등|
|키캡 64개|DSA 무각 104키 추천|
|카일 핫스왑 소켓 64개 (선택)|핫스왑 하실 분들만|
|전선|랩핑와이어 추천(인두기로 녹여서 사용가능)|https://www.devicemart.co.kr/goods/view?no=1274107|
|납땜 재료|인두기, 납, 인두기 스탠드 등등|
|글루건 or 본드|
|미끄럼 방지 패드 or 범퍼|저는 10파이 제품 사용했습니다|https://smartstore.naver.com/mg9000/products/3289975643|

재료는 디바이스마트나 엘레파츠에서 구매가능합니다

## 1. 3D프린터로 케이스 출력

## 2. 케이스 서포트 제거
<img width="522" alt="스크린샷 2021-10-04 오전 12 17 17" src="https://user-images.githubusercontent.com/91782246/135760430-ef109b93-6f83-42ab-a01b-d049fe23509b.png">
(서포트 - 빨간색)

## 3. 납땜

행 부분에서는 스위치에 다이오드를 연결해주고 다이오드의 검정부분을 연결

## 4. Pro micro - 스위치, TRRS 연결

<img width="640" alt="스크린샷 2021-10-03 오후 11 45 57" src="https://user-images.githubusercontent.com/91782246/135756721-60a5d858-9b95-4c4b-9dd7-ec2c003c7c5b.jpeg">
<img width="640" alt="스크린샷 2021-10-03 오후 11 45 57" src="https://user-images.githubusercontent.com/91782246/135759269-02622c39-c137-460a-a383-7207bb6ccf55.png">
<img width="640" alt="스크린샷 2021-10-03 오후 11 46 15" src="https://user-images.githubusercontent.com/91782246/135759166-3477190b-27c7-4b23-b5fb-ae4a79b77463.png">
<img width="640" alt="스크린샷 2021-10-03 오후 11 46 15" src="https://user-images.githubusercontent.com/91782246/136039914-60de64c5-6e7b-4006-b7d5-0669afe59338.jpg">
<img width="640" alt="스크린샷 2021-10-03 오후 11 46 15" src="https://user-images.githubusercontent.com/91782246/136039945-d9309f67-5a65-455d-b4f3-614370c2cac5.jpg">


## 5. 키맵핑

QMK 키코드
https://beta.docs.qmk.fm/using-qmk/simple-keycodes/keycodes
<img width="640" alt="스크린샷 2021-10-03 오후 11 46 15" src="https://user-images.githubusercontent.com/91782246/136012438-bf4c535d-8bc3-44e0-bc8c-5259d1e26dd9.png">
<img width="640" alt="스크린샷 2021-10-03 오후 11 46 15" src="https://user-images.githubusercontent.com/91782246/136046077-958e0a14-57e7-42a5-8f9b-44fb3c5e1899.png">
    
    qmk compile -kb wingB -km default

## 6. Flash (아두이노에 코드 업로드)
QMK Toolbox
https://github.com/qmk/qmk_toolbox/releases
<img width="603" alt="스크린샷 2021-10-03 오후 11 48 50" src="https://user-images.githubusercontent.com/91782246/135759217-e21f7cad-a057-4379-89e5-12238ecb0e04.png">

아두이노 RST, GND 연결
노란색 Connect표시가 뜨면 Flash 클릭

## ETC
104키 키보드 키캡 사이즈 
![image](https://user-images.githubusercontent.com/91782246/136012741-ca210e9b-7bec-483a-ab08-23d6aace6667.png)

star 한번씩 눌러주시면 감사드리겠습니다..ㅎ

## 수정사항
21.01.10 hexfile Trrs 2번에서 3번으로 수정

## 상업적 이용 금지합니다!
 


