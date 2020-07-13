#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class FileWebResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "FileWebResponse"));
	}

	template <typename T = uintptr_t> T& responseUri() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& fileStream() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& contentLength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& webHeaders() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(FileWebResponse*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42CA420))(this, serializationInfo, streamingContext);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FileWebResponse*))(Il2CppBase() + 0x42CA448))(this);
	}
	template <typename T = int64_t> T get_ContentLength() {
		return ((T (*)(FileWebResponse*))(Il2CppBase() + 0x42CA4F8))(this);
	}
	template <typename T = uintptr_t> T get_Headers() {
		return ((T (*)(FileWebResponse*))(Il2CppBase() + 0x42CA5EC))(this);
	}
	template <typename T = uintptr_t> T get_ResponseUri() {
		return ((T (*)(FileWebResponse*))(Il2CppBase() + 0x42CA604))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(FileWebResponse*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42CA61C))(this, serializationInfo, streamingContext);
	}
	template <typename T = uintptr_t> T GetResponseStream() {
		return ((T (*)(FileWebResponse*))(Il2CppBase() + 0x42CA798))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(FileWebResponse*))(Il2CppBase() + 0x42CA7B0))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(FileWebResponse*))(Il2CppBase() + 0x42CA84C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(FileWebResponse*, bool))(Il2CppBase() + 0x42CA4A8))(this, disposing);
	}
	template <typename T = void> T CheckDisposed() {
		return ((T (*)(FileWebResponse*))(Il2CppBase() + 0x42CA510))(this);
	}

};

}
