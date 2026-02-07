# IoT-Based Smart Agriculture Monitoring System 🌱

## Domain
IoT – Agriculture & Aquaculture

## Branch
Electrical and Electronics Engineering (EEE)

---

## 1. Problem Statement
Traditional agriculture irrigation systems do not monitor soil conditions in real time, leading to water wastage and reduced crop yield. A smart monitoring system is required to continuously observe soil parameters and generate irrigation alerts automatically.

---

## 2. Proposed Solution
This project presents an IoT-based Smart Agriculture Monitoring System that monitors soil moisture and environmental parameters. Sensors collect real-time data and send it to a microcontroller acting as a gateway. The data is transmitted to the cloud for analysis, and alerts are generated when irrigation is required.

---

## 3. System Architecture Overview
The system consists of four layers:
- Sensing Layer
- Gateway Layer
- Cloud Layer
- Application Layer

An architecture diagram is included in the repository.

---

## 4. Sensor Selection & Justification

| Sensor | Parameter | Purpose |
|------|----------|---------|
| Soil Moisture Sensor | Soil water level | Determines irrigation need |
| Temperature Sensor | Ambient temperature | Affects crop water requirement |
| Humidity Sensor | Air humidity | Environmental monitoring |
| Water Level Sensor | Tank level | Prevents dry running of motor |

---

## 5. Data Flow
1. Sensors collect data from the field.
2. Microcontroller (ESP32) reads sensor values.
3. Data is sent to the cloud using Wi-Fi.
4. Cloud stores and analyzes the data.
5. Alerts are generated based on threshold values.

---

## 6. Alert Logic
If soil moisture falls below a predefined threshold, an irrigation alert is generated and the motor is turned ON.

---

## 7. Sample Output
Sample JSON output representing cloud data is provided in the Dashboard folder.

---

## 8. Conclusion
The proposed system is efficient, scalable, and practically feasible. It helps in reducing water wastage and supports smart farming practices.
