# 2021_mock_satV1
QSAT mock-sat V1 made in Fall 2021
**REPO RULES: Require pull request reviews before merging to master. All commits must be made to a non-protected branch and submitted via a pull request with the required number of (1) approving review before it can be merged into the branch.**

## What is the MockSat V1?
V1 of our 2021-2022 MockSat is a minimum viable product system that will execute the purpose of our Selfie Sat for CSDC-6. Our final design will be presented internally in December 2021. The system can:
1. Receive a remote command to take a photo
2. Take a photo and compress it
3. Send the photo back to the remote operator
4. (Stretch goal) Enter a sun-seeking mode where the assembly will be able to turn towards a light using a single-axis reaction wheel

Our system diagram can be found on Google Drive [here](https://drive.google.com/file/d/1jAuO0hj80AlA5cXQ0SSzOl2MZYgsEeIt/view?usp=sharing)

## Sub-system objectives:
* ADCS: existing HORIZON sensor suite + coarse sun sensors (+ reaction wheels as stretch goal)
* EPS: independently power the system and charge the batteries + temperature sensor
* OBC: relay information between ADCS, Comms, Payload, and EPS (Raspberry Pi)
* Comms: 2-way communication with a remote operator (no distance requirement)
* Payload: capture an image and compress it to a "manageable" size, relay to OBC
* Mech: Prototype chassis with flexible mounting
