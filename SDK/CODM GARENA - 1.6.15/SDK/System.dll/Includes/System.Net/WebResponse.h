#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebResponse"));
	}


	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WebResponse*))(Il2CppBase() + 0x3E773EC))(this);
	}
	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(WebResponse*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E773FC))(this, serializationInfo, streamingContext);
	}
	template <typename T = int64_t> T get_ContentLength() {
		return ((T (*)(WebResponse*))(Il2CppBase() + 0x3E77490))(this);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(WebResponse*))(Il2CppBase() + 0x3E77524))(this);
	}
	template <typename T = uintptr_t> static T GetMustImplement() {
		return ((T (*)(void *))(Il2CppBase() + 0x3E775B8))(0);
	}
	template <typename T = uintptr_t> T get_ResponseUri() {
		return ((T (*)(WebResponse*))(Il2CppBase() + 0x3E77644))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(WebResponse*))(Il2CppBase() + 0x3E776D8))(this);
	}
	template <typename T = uintptr_t> T GetResponseStream() {
		return ((T (*)(WebResponse*))(Il2CppBase() + 0x3E7776C))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(WebResponse*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E77800))(this, serializationInfo, streamingContext);
	}

};

}
