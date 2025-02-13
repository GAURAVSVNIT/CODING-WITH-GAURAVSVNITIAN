from fpdf import FPDF

# Custom PDF class to add optional topic header
class QuestionsPDF(FPDF):
    def header(self):
        if hasattr(self, 'current_topic') and self.current_topic:
            self.set_font('Arial', 'B', 12)
            self.cell(0, 10, self.current_topic, ln=True, align='C')
            self.ln(2)
    def footer(self):
        self.set_y(-15)
        self.set_font('Arial', 'I', 8)
        self.cell(0, 10, f'Page {self.page_no()}', 0, 0, 'C')

# Define questions (with answer outlines) for each topic
questions = {
    "PN Junction Basics": [
        {
            "question": "1. What is a PN junction?",
            "answer": "A PN junction is formed when p-type and n-type semiconductors are joined, resulting in a depletion region."
        },
        {
            "question": "2. What is doping in semiconductors?",
            "answer": "Doping is the process of adding impurities to a semiconductor to increase its carrier concentration."
        },
        {
            "question": "3. How is the depletion region formed?",
            "answer": "The depletion region forms when electrons and holes diffuse across the junction and recombine, leaving behind ionized atoms."
        },
        {
            "question": "4. What is built-in potential?",
            "answer": "Built-in potential is the voltage developed across the PN junction due to the separation of charges."
        },
        {
            "question": "5. Derive the diode equation.",
            "answer": "The diode equation is I = Iₛ (exp(V/(nVₜ)) - 1), where Iₛ is the reverse saturation current and Vₜ is the thermal voltage."
        },
        {
            "question": "6. What happens under forward bias?",
            "answer": "Forward bias reduces the depletion width, allowing significant carrier injection and current flow."
        },
        {
            "question": "7. What happens under reverse bias?",
            "answer": "Reverse bias widens the depletion region, and only a small leakage (saturation) current flows."
        },
        {
            "question": "8. Define reverse saturation current.",
            "answer": "It is the small current due to minority carriers under reverse bias conditions."
        },
        {
            "question": "9. How do you calculate the forward bias voltage for a given current?",
            "answer": "Using V = nVₜ ln(I/Iₛ) when the diode equation is approximated for V >> nVₜ."
        },
        {
            "question": "10. What is avalanche breakdown?",
            "answer": "Avalanche breakdown occurs when carriers gain sufficient kinetic energy to ionize atoms, causing a chain reaction."
        },
        {
            "question": "11. What is Zener breakdown?",
            "answer": "Zener breakdown is a tunneling phenomenon that occurs in heavily doped PN junctions at low reverse voltages."
        },
        {
            "question": "12. How does temperature affect diode behavior?",
            "answer": "Higher temperatures increase the reverse saturation current and can reduce the built-in potential."
        },
        {
            "question": "13. What is the ideality factor?",
            "answer": "The ideality factor quantifies how closely a diode follows the ideal diode equation, typically between 1 and 2."
        },
        {
            "question": "14. How does doping concentration affect the depletion width?",
            "answer": "Higher doping reduces the depletion width, while lower doping increases it."
        },
        {
            "question": "15. What are common applications of PN junction diodes?",
            "answer": "Applications include rectifiers, voltage regulators, signal detectors, and solar cells."
        },
        {
            "question": "16. How can the built-in potential be measured?",
            "answer": "It is often measured using capacitance–voltage (C–V) profiling techniques."
        },
        {
            "question": "17. What is diffusion current?",
            "answer": "Diffusion current is caused by carrier movement from high to low concentration regions."
        },
        {
            "question": "18. What is drift current?",
            "answer": "Drift current is due to carriers moving under the influence of an electric field in the depletion region."
        },
        {
            "question": "19. How does recombination affect diode performance?",
            "answer": "Recombination reduces the number of free carriers, affecting the efficiency of current conduction."
        },
        {
            "question": "20. Describe the I-V characteristics of a diode.",
            "answer": "The I-V curve shows an exponential increase in current under forward bias and minimal current under reverse bias."
        }
    ],
    "Transistor Biasing": [
        {
            "question": "1. What is transistor biasing?",
            "answer": "Biasing sets the operating (Q) point of a transistor to ensure proper functioning in amplifiers or switches."
        },
        {
            "question": "2. Why is establishing a Q-point important?",
            "answer": "The Q-point ensures the transistor operates in the desired active region for linear amplification."
        },
        {
            "question": "3. What is fixed bias?",
            "answer": "Fixed bias uses a single resistor to set the base current but is sensitive to temperature and beta variations."
        },
        {
            "question": "4. What are the drawbacks of fixed bias?",
            "answer": "It is unstable with temperature changes and variations in transistor parameters."
        },
        {
            "question": "5. Explain voltage-divider bias.",
            "answer": "Voltage-divider bias uses a resistor network to set a stable base voltage, enhancing thermal stability."
        },
        {
            "question": "6. How does emitter degeneration improve bias stability?",
            "answer": "An emitter resistor provides negative feedback that stabilizes the Q-point."
        },
        {
            "question": "7. What is collector-to-base biasing?",
            "answer": "It feeds a portion of the collector voltage back to the base, improving stability."
        },
        {
            "question": "8. Describe DC load line analysis.",
            "answer": "It is a graphical method to determine the Q-point by plotting the transistor’s characteristic curves with the load line."
        },
        {
            "question": "9. How is base current determined?",
            "answer": "Base current is typically set by the biasing network and is related to emitter current by I_B ≈ I_E/β."
        },
        {
            "question": "10. How does transistor beta affect bias stability?",
            "answer": "Variations in beta can shift the Q-point; stable biasing techniques minimize this effect."
        },
        {
            "question": "11. How do you design a bias network?",
            "answer": "By selecting appropriate resistor values to achieve the desired base voltage and current."
        },
        {
            "question": "12. What is thermal runaway?",
            "answer": "It is a condition where increased temperature causes higher currents, further raising temperature in a positive feedback loop."
        },
        {
            "question": "13. How does supply voltage variation affect biasing?",
            "answer": "Changes in V_CC can shift the Q-point unless the bias network is designed for stability."
        },
        {
            "question": "14. What are the advantages of voltage-divider bias?",
            "answer": "It provides better stability and is less sensitive to transistor parameter variations than fixed bias."
        },
        {
            "question": "15. Compare fixed bias and emitter bias.",
            "answer": "Emitter bias incorporates negative feedback, offering better thermal stability than fixed bias."
        },
        {
            "question": "16. How is biasing implemented in a common-emitter amplifier?",
            "answer": "A combination of resistor networks and emitter resistors is used to set the Q-point."
        },
        {
            "question": "17. How does biasing affect amplifier linearity?",
            "answer": "Proper biasing ensures the transistor operates in its linear region, minimizing distortion."
        },
        {
            "question": "18. What practical factors influence bias design?",
            "answer": "Component tolerances, supply variations, and ambient temperature all affect bias stability."
        },
        {
            "question": "19. Provide an example of calculating resistor values for biasing.",
            "answer": "Using V_B = V_E + V_BE and I_B = I_E/β to select voltage-divider resistors."
        },
        {
            "question": "20. What is the Q-point?",
            "answer": "The quiescent operating point of a transistor when no signal is applied."
        }
    ],
    "Wave Shaping Circuits": [
        {
            "question": "1. What is the purpose of wave shaping circuits?",
            "answer": "They modify input waveforms to achieve a desired output shape."
        },
        {
            "question": "2. What is a clipper circuit?",
            "answer": "A clipper circuit limits the amplitude of a waveform by removing parts of it above or below a set level."
        },
        {
            "question": "3. What is a clamper circuit?",
            "answer": "A clamper circuit shifts the DC level of a waveform without changing its shape."
        },
        {
            "question": "4. Explain the operation of a rectifier circuit.",
            "answer": "Rectifiers convert AC signals to DC, typically using diodes."
        },
        {
            "question": "5. What is an integrator circuit?",
            "answer": "An integrator produces an output proportional to the integral of the input signal."
        },
        {
            "question": "6. What is a differentiator circuit?",
            "answer": "A differentiator produces an output proportional to the rate of change (derivative) of the input signal."
        },
        {
            "question": "7. What role do RC circuits play in wave shaping?",
            "answer": "RC circuits determine the time constant that controls charging and discharging, affecting waveform shape."
        },
        {
            "question": "8. How does a low-pass filter work?",
            "answer": "It allows low-frequency signals to pass while attenuating high-frequency components."
        },
        {
            "question": "9. How does a high-pass filter work?",
            "answer": "It passes high-frequency signals and attenuates low-frequency components."
        },
        {
            "question": "10. What are common applications of clipper circuits?",
            "answer": "They are used to protect circuits from voltage surges and shape signal amplitudes."
        },
        {
            "question": "11. How does a clamper circuit shift a waveform?",
            "answer": "It uses a capacitor and diode to add a DC level to the waveform."
        },
        {
            "question": "12. Define the RC time constant.",
            "answer": "The time constant, τ = RC, is the time required for a capacitor to charge to about 63% of the supply voltage."
        },
        {
            "question": "13. What is the difference between passive and active wave shaping circuits?",
            "answer": "Passive circuits use only resistors, capacitors, and diodes; active circuits also use amplifiers for improved performance."
        },
        {
            "question": "14. How do integrators filter high-frequency noise?",
            "answer": "By averaging the input over time, integrators attenuate rapid changes associated with high frequencies."
        },
        {
            "question": "15. How do differentiators emphasize edges in a waveform?",
            "answer": "They produce a high output when there is a rapid change, highlighting the edges."
        },
        {
            "question": "16. What is the frequency response of a differentiator?",
            "answer": "The output amplitude increases with frequency, making it sensitive to high-frequency components."
        },
        {
            "question": "17. What design challenges are faced in wave shaping circuits?",
            "answer": "Challenges include non-ideal component behavior and sensitivity to tolerances."
        },
        {
            "question": "18. Provide an example design of a clipper circuit.",
            "answer": "A diode and resistor network can clip an AC waveform to a specified voltage level."
        },
        {
            "question": "19. Discuss the role of op-amps in wave shaping.",
            "answer": "Op-amps can be used to create active wave shaping circuits with better precision and gain control."
        },
        {
            "question": "20. How do component tolerances affect wave shaping performance?",
            "answer": "Variations in resistor or capacitor values can shift time constants and alter the expected waveform shape."
        }
    ],
    "Boolean Algebra": [
        {
            "question": "1. What is Boolean algebra?",
            "answer": "Boolean algebra is the branch of algebra dealing with binary variables and logical operations."
        },
        {
            "question": "2. What are the basic operations in Boolean algebra?",
            "answer": "The basic operations are AND, OR, and NOT."
        },
        {
            "question": "3. Define a Boolean variable.",
            "answer": "A Boolean variable can have only two values: 0 (false) or 1 (true)."
        },
        {
            "question": "4. What is a truth table?",
            "answer": "A truth table lists all possible values of logical expressions for given inputs."
        },
        {
            "question": "5. Explain De Morgan's Theorem.",
            "answer": "De Morgan's Theorem shows how to express the complement of a conjunction as the disjunction of the complements, and vice versa."
        },
        {
            "question": "6. What is the Sum-of-Products (SOP) form?",
            "answer": "SOP is a canonical form where a logical expression is represented as a sum (OR) of minterms."
        },
        {
            "question": "7. What is the Product-of-Sums (POS) form?",
            "answer": "POS is a canonical form where a logical expression is represented as a product (AND) of maxterms."
        },
        {
            "question": "8. How are Karnaugh maps used?",
            "answer": "Karnaugh maps are graphical tools used to simplify Boolean expressions by grouping adjacent ones or zeros."
        },
        {
            "question": "9. What is the consensus theorem?",
            "answer": "The consensus theorem helps eliminate redundant terms from Boolean expressions."
        },
        {
            "question": "10. How is Boolean algebra applied to digital circuits?",
            "answer": "It forms the theoretical basis for designing logic circuits and minimizing logic expressions."
        },
        {
            "question": "11. What are the common logic gates?",
            "answer": "Common gates include AND, OR, NOT, NAND, NOR, XOR, and XNOR."
        },
        {
            "question": "12. What is logic minimization?",
            "answer": "Logic minimization involves reducing the number of terms or gates needed to implement a Boolean function."
        },
        {
            "question": "13. Define duality in Boolean algebra.",
            "answer": "Duality means every Boolean expression remains valid if AND and OR operations are interchanged and 0s and 1s are swapped."
        },
        {
            "question": "14. How can you simplify a Boolean expression?",
            "answer": "By applying Boolean identities, De Morgan’s laws, and using tools like Karnaugh maps."
        },
        {
            "question": "15. Provide an example of Boolean simplification.",
            "answer": "For example, A + A'B simplifies to A + B using the consensus theorem."
        },
        {
            "question": "16. How does Boolean algebra help in circuit optimization?",
            "answer": "It reduces the number of gates and complexity, thereby minimizing cost and power consumption."
        },
        {
            "question": "17. How can Boolean expressions help detect hazards?",
            "answer": "By analyzing race conditions and designing circuits to avoid glitches in high-speed logic."
        },
        {
            "question": "18. What is the difference between combinational and sequential logic?",
            "answer": "Combinational logic depends only on current inputs; sequential logic has memory and depends on past inputs."
        },
        {
            "question": "19. What software tools assist in Boolean simplification?",
            "answer": "Tools like Logic Friday, Karnaugh map solvers, and various CAD tools are commonly used."
        },
        {
            "question": "20. How does Boolean algebra contribute to error detection in circuits?",
            "answer": "It is used in designing parity checkers and other error-detecting/correcting circuits."
        }
    ]
}

# Create PDF instance
pdf = QuestionsPDF(orientation="P", unit="mm", format="A4")
pdf.set_auto_page_break(auto=True, margin=15)
pdf.set_font("Arial", size=11)

# Add a cover page
pdf.add_page()
pdf.current_topic = ""
pdf.set_font("Arial", 'B', 16)
pdf.cell(0, 20, "College-Level Analog Circuits Questions", ln=True, align="C")
pdf.ln(10)
pdf.set_font("Arial", size=12)
cover_text = (
    "This document contains approximately 20 questions per topic for the following topics:\n\n"
    "1. PN Junction Basics\n"
    "2. Transistor Biasing\n"
    "3. Wave Shaping Circuits\n"
    "4. Boolean Algebra\n\n"
    "Each question is accompanied by a brief answer outline. Use these questions for exam preparation and self-assessment."
)
pdf.multi_cell(0, 10, cover_text)
pdf.ln(5)

# Loop through topics and add questions
for topic, qlist in questions.items():
    # Topic header page
    pdf.add_page()
    pdf.current_topic = topic
    pdf.set_font("Arial", 'B', 14)
    pdf.cell(0, 10, f"{topic} - Questions", ln=True, align="C")
    pdf.ln(5)
    
    # For each question, add question and answer
    pdf.set_font("Arial", size=11)
    for q in qlist:
        pdf.multi_cell(0, 7, q["question"], border=0)
        pdf.ln(1)
        pdf.set_font("Arial", 'I', 10)
        pdf.multi_cell(0, 7, "Answer: " + q["answer"], border=0)
        pdf.ln(4)
        pdf.set_font("Arial", size=11)
    
    # Add a page break after each topic
    pdf.add_page()

# Save the PDF file
pdf_filename = "/mnt/data/Analog_Circuits_Questions_Extended.pdf"
pdf.output(pdf_filename, "F")
print("PDF generated:", pdf_filename)
