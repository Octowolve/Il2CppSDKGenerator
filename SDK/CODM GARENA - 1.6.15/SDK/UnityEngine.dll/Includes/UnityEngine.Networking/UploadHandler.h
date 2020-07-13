#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Networking {

class UploadHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Networking", "UploadHandler"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T InternalCreateRaw(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(UploadHandler*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4ABCEC0))(this, data);
	}
	template <typename T = void> T InternalDestroy() {
		return ((T (*)(UploadHandler*))(Il2CppBase() + 0x4ABCF60))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(UploadHandler*))(Il2CppBase() + 0x4ABCFF8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UploadHandler*))(Il2CppBase() + 0x4ABC3A8))(this);
	}
	template <typename T = void> T set_contentType(Il2CppString* value) {
		return ((T (*)(UploadHandler*, Il2CppString*))(Il2CppBase() + 0x4ABD05C))(this, value);
	}
	template <typename T = void> T SetContentType(Il2CppString* newContentType) {
		return ((T (*)(UploadHandler*, Il2CppString*))(Il2CppBase() + 0x4ABD06C))(this, newContentType);
	}

};

}
