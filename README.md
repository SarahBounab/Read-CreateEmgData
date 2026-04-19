# Read-CreateEmgData
This repository provides MATLAB tools to read, visualize, and label EMG signals recorded from the pectoralis muscle for a binary classification task (rest vs contraction). Dataset available via Zenodo.

---

Here's a file to illustre how to use the MATLAB code in order to read EMG Data

The dataset consists of 29 sEMG signals recorded from the pectoralis muscle of 18 healthy adults with varied age, weight, and height, after obtaining informed consent, at the LINS Laboratory (USTHB). The main objective is to identify two distinct classes: rest and muscle contraction.

Recordings were made using gel electrodes and a custom EMG acquisition board at a sampling rate of 1000 Hz, transmitted in real time to a computer via ESP32 and MATLAB, and stored in CSV format. Each session lasted 65 seconds and followed a structured protocol where participants alternated between the two classes every few seconds. Most participants contributed two sessions with a 3.7 V supply.

Each CSV file initially contains four columns: Sample - Time - FilteredV - Label

The custom EMG acquisition board was designed to provide clean, high-quality signals through the following stages: Instrumentation amplifier with a gain of 500. Active band-pass filter (30–500 Hz) to suppress motion artifacts, DC offset, and high-frequency noise. Notch filter at 50 Hz to remove power line interference. Main amplification stage with a gain of 201. Digital first-order IIR high-pass filter (cutoff 50 Hz) implemented on the ESP32 to mitigate ECG contamination.

Additionally, the repository includes: Arduino ide ESP32 code for real-time digital filtering of the EMG signals. MATLAB code for reading, visualizing, and storing the EMG data in CSV format. MATLAB code for labeling the data.

Data link to download

==> "https://doi.org/10.5281/zenodo.17024424"

For more details, please feel free to contact us: Kharziwisseme@hotmail.com - bounabsarah2001@gmail.com
