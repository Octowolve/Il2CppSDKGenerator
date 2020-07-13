#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUParameterUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_ParameterUtility"));
	}


	template <typename T = int32_t> static T GetParameterIndexFromName(uintptr_t session, Il2CppArray<uintptr_t>* parameters, Il2CppString* parameterName) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x2BE5500))(0, session, parameters, parameterName);
	}
	template <typename T = int32_t> static T GetParameterIndexFromNameOrTag(uintptr_t session, int32_t nodeID, Il2CppArray<uintptr_t>* parameters, Il2CppString* parameterName) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x2BDC63C))(0, session, nodeID, parameters, parameterName);
	}
	template <typename T = float> static T GetParameterFloatValue(uintptr_t session, int32_t nodeID, Il2CppArray<uintptr_t>* parameters, Il2CppString* parameterName, float defaultValue) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppString*, float))(Il2CppBase() + 0x2BDCDCC))(0, session, nodeID, parameters, parameterName, defaultValue);
	}
	template <typename T = uintptr_t> static T GetParameterColor3Value(uintptr_t session, int32_t nodeID, Il2CppArray<uintptr_t>* parameters, Il2CppString* parameterName, uintptr_t defaultValue) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2BDCF3C))(0, session, nodeID, parameters, parameterName, defaultValue);
	}

};

}
