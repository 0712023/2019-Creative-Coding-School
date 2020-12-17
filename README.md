# 2019 Creative IoT Coding School

## Project Synopsis
- 행사명 : 2019 IoT 창의 코딩스쿨
- 주최 : 성균관대학교 LINC+사업단, 성균관대학교 IoT UNIC
- 주관 : 성균관대학교 LINC+사업단, 수원
- 진행 기간 : '19.1.7 ~ '19.1.14
- 내용 : 변화하는 4차 산업혁명 및 Digital transformation 시대에 발맞춰 젊은 인재를 찾아 육성하는 프로그램인 2019 IoT 창의 코딩스쿨은 IoT 교육, 컴퓨팅 사고력, 창의성 및 코딩 능력 향상을 목적으로 하였습니다. 약 일주일 동안 삼성 Artik IoT Platform을 활용하여 다양한 센서의 제어 및 C언어 프로그래밍을 배울 수 있었고, 팀 프로젝트를 통해 최종발표회를 거쳐 시상식을 진행했습니다.
### Purpose
Fitness center 환경을 가정하여 이용자가 직접 방문하지 않고도 많은 인원이 사용 중이어서 붐비는지, 또는 한산한 환경인지를 실시간으로 체크하여 이용자의 최적화된 fitness routine을 계획할 수 있게 하는 것이 목표입니다.
### Tools
- <a href=https://www.tinkercad.com/>Tinkercad</a>, 3D Printing<br>&emsp;![Tinkercad](https://blog.tinkercad.com/hs-fs/hubfs/2019-TinkerCad/tc-logo.png?width=61&name=tc-logo.png)
  - Tinkercad를 활용하여 온라인 3D modeling을 했습니다. Fitness center 환경을 실감나게 재현하기 위해 직접 출입문, 이용자 dummy, fitness 도구들을 제작했습니다.특히 출입문의 경우 fitness center 안팎으로 모두 회전이 가능한 여닫이 문짝으로 제작했습니다.
  - 성균관대학교 학생은 무료로 사용 가능한 교내 3D printer를 활용하여 직접 modeling한 3D model을 출력할 수 있었습니다. 문짝 및 문 받침대와 같이 넓은 평면의 구조를 출력할 때 내부 지지대를 튼튼하게 설계하지 않아 구조가 무너지는 경우가 있었습니다. 또한, dummy를 출력할 때 몸통과 머리의 사이 부분이 충격에 약하여 제작 후 파손되는 경우가 있었습니다.<br><br>
- Samsung ARTIK<br><img src=https://static.htecgroup.com/uploads/2018/07/artic.png width="200"><img src=https://www.cnx-software.com/wp-content/uploads/2016/10/Samsung-Artik-0-Development-Kit.jpg width="120" height="90">
  - 지금은 종료된 프로젝트인 삼성 Artik은 Raspberry pi와 같이 IoT platform으로 볼 수 있지만 좀더 보안성에 중점을 두었고, Artik 보드를 이용한 다양한 IoT 기기간의 연동성이 우수하다는 장점이 있습니다. 하지만 타 IoT platform에 비해 소스코드가 매우 적고, 커뮤니티가 활성화되지 않아 일반인보다는 전문가용으로 많이 쓰이고 있습니다.
  - 이번 프로젝트에서 사용한 Artik 5 kit는 Artik 5 보드 외에 led, switch, IR, speaker 등 다양한 센서 모듈이 함께 제공되어 직접 IoT system을 구축하는 데에 적합했습니다.
- <a href="https://appinventor.mit.edu/">App Inventor</a><br>&emsp;![appinventor](https://appinventor.mit.edu/images/logo.png)
  - MIT에서 개발한 App Inventor를 통해 누구나 간단하게 mobile application을 제작할 수 있습니다.
  - 이번 프로젝트에서 Artik에서 mqtt를 통해 Artik cloud에 fitness center 사용 인원 정보를 전달하고, App Inventor를 활용하여 Artik cloud에서 같은 정보를 전달받아 최종적으로 사용자가 데이터를 확인할 수 있도록 했습니다.
- C

## Project Details
### Mini Project: 창의 컵 만들기
- 3D Modeling by <a href=https://www.tinkercad.com/>Tinkercad</a><br>
Tinkercad를 활용하여 직접 제가 원하는 사이즈의 3D 화분을 구상하였는데, 속이 빈 prolate ellipsoid의 형태 및 받침대로 설계하였습니다. 작은 식물(캣그라스)를 기르기 위한 화분이기 때문에 물이 빠질 수있는 작은 구멍을 하단에 4개 뚫어주었습니다. 이후, 교내에 있는 무료 3D printer를 활용하여 제작했습니다.<br>
<p align="center">
<img src = "https://i.imgur.com/T1iMlpx.png"><img src="https://i.imgur.com/mK2JIZX.png"><br><img src="https://i.imgur.com/xMpt0gU.png"><img src="https://i.imgur.com/k3IK8t4.png"><img src="https://i.imgur.com/GvbyZ7s.png">
</p>

### Final Project: 헬스장 실시간 혼잡도 파악
- 출입문
  - 실제 fitness center 출입문을 토대로 여닫이 문으로 가정했습니다.<br><p align="center"><img src="https://i.imgur.com/b0IcSj7.png" width="200"><img src="https://i.imgur.com/hwrCXn3.png" width="200"></p><br>
  - IR Sensor를 출입문 위쪽 실내&#183;외에 하나씩 장착하여 사람이 지나갔는지를 체크합니다. 사람 외에 문짝이 센서를 지나갈 수 있어 센서와 물체와의 거리에 구체적인 차등을 두어 물체가 지나갔을 때 그 물체가 사람인지, 문짝인지를 구별할 수 있게 하였습니다. IR sensor는 적외선 센서로, 적외선을 쏘아 물체에 부딪힌 후 돌아오는 시간을 통해 물체와의 거리를 측정하는 센서입니다. 값이 클수록 물체와의 거리가 가깝고, 값이 작을수록 물체와의 거리가 멉니다. 구체적인 값은 다음 표와 같습니다.<br>
  <table border="1">
  	<th>센서</th>
  	<th>물체까지의 거리</th>
  	<tr>
  	    <td>문짝</td>
  			<td>150~300</td>
  	</tr>
  	<tr>
  	    <td>사람</td>
  			<td>50~120</td>
  	</tr>
    <tr>
  	    <td>바닥</td>
  			<td>10~30</td>
  	</tr>
  </table>
실내 센서 &xrarr; 실외 센서 : 인원 1 감소<br>
실외 센서 &xrarr; 실내 센서 : 인원 1 증가<br>
  - 혼잡도
      - Fitness center를 이용하기에 쾌적한 인원 기준은 fitness center의 규모에 따라 다르지만 demo에서는 빠른 시연을 위해 다음 표를 기준으로 결과를 도출해냈습니다.<br>
  &emsp;<table border="1">
  	<th>인원</th>
  	<th>현황</th>
  	<tr>
  	    <td>2</td>
  			<td>한산</td>
  	</tr>
  	<tr>
  	    <td>3</td>
  			<td>혼잡</td>
  	</tr>
    <tr>
  	    <td>4</td>
  			<td>매우혼잡</td>
  	</tr>
  </table>

  - MQTT
    - 삼성 Artik이 지원하는 기본 cloud로 온도, 시간, 등 다양한 데이터를 전송할 수 있는데 온라인 상에서 가장 많이 쓰이는 통신 프로토콜 중 하나인 mqtt를 활용하여 fitness center 이용자 수 데이터를 전송했습니다.
  - App Inventor
    - App Inventor를 활용하여 간단하게 Artik cloud에서 fitness center 이용자 수 데이터를 받아 그 결과를 화면에 출력되게 하는 mobile application을 개발했습니다. 최종 시연회에 이 app을 간단히 다운로드 받을 수 있는 QR코드를 배포하여 실시간으로 값이 변화하는 것을 각자의 모바일 기기에서 쉽게 확인할 수 있었습니다.
  <p align="center"><img src="https://i.imgur.com/JdVgnDL.png" width="200"> <img src="https://i.imgur.com/B42uzlf.png" width="200"></p>

### Demo Video
<p align="center">
<img src = https://i.imgur.com/OjymiGy.gif width = "400">
</p>

## Review
실내 인원을 측정하는 IoT system은 위 프로젝트와 같이 fitness center 뿐만 아니라 많은 사람들이 이용하는 공용화장실, 공중전화, ATM, 등 다양한 분야에 접목시킬 수 있습니다. 짧은 시간에 이 system을 구축하는 일은 쉽지 않았지만 이 프로젝트를 통해 IoT에 대해 많은 것을 배울 수 있었고, 차후 Artik과 같은 소형 IoT platform을 통해 직접 IoT 시스템을 구축할 수 있다는 자신감을 얻었습니다.
