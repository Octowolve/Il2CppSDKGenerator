#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftJSONUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftJSONUtility"));
	}


	template <typename T = uintptr_t> static T getHelpshiftUser(Il2CppString* serializedJSONHelpshiftUser) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4752BE0))(0, serializedJSONHelpshiftUser);
	}
	template <typename T = uintptr_t> static T getAuthFailureReason(Il2CppString* serializedJSONAuthFailure) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4752EC0))(0, serializedJSONAuthFailure);
	}

};

}
