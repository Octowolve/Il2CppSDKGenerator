#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class CookieException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "CookieException"));
	}


	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(CookieException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42BE3BC))(this, info, context);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(CookieException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42BE3DC))(this, serializationInfo, streamingContext);
	}

};

}
