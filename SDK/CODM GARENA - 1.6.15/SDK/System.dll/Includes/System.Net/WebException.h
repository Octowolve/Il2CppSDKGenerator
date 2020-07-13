#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebException"));
	}

	template <typename T = uintptr_t> T& response() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(WebException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E71BEC))(this, info, context);
	}
	template <typename T = uintptr_t> T get_Response() {
		return ((T (*)(WebException*))(Il2CppBase() + 0x3E71C0C))(this);
	}
	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(WebException*))(Il2CppBase() + 0x3E71C14))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(WebException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E71C1C))(this, serializationInfo, streamingContext);
	}

};

}
