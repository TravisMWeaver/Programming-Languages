enum HospitalCodes: String
{
    case blue = "blue"
    case red = "red"
    case orange = "orange"
    case silver = "silver"
    case grey = "grey"
    case amberAlert = "amberAlert"
    case internalTriage = "internalTriage"
    case externalTriage = "externalTriage"
    case rapidResponseTeam = "rapidResponseTeam"
    case clear = "clear"
}

var emergencyCode: String;
emergencyCode = HospitalCodes.blue.rawValue;
print("Code: \(emergencyCode)");

emergencyCode = HospitalCodes.red.rawValue;
print("Code: \(emergencyCode)");

emergencyCode = HospitalCodes.orange.rawValue;
print("Code: \(emergencyCode)");

emergencyCode = HospitalCodes.silver.rawValue;
print("Code: \(emergencyCode)");

emergencyCode = HospitalCodes.grey.rawValue;
print("Code: \(emergencyCode)");

emergencyCode = HospitalCodes.amberAlert.rawValue;
print("Code: \(emergencyCode)");

emergencyCode = HospitalCodes.internalTriage.rawValue;
print("Code: \(emergencyCode)");

emergencyCode = HospitalCodes.externalTriage.rawValue;
print("Code: \(emergencyCode)");

emergencyCode = HospitalCodes.rapidResponseTeam.rawValue;
print("Code: \(emergencyCode)");

emergencyCode = HospitalCodes.clear.rawValue;
print("Code: \(emergencyCode)");