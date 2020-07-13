#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Networking {

class DownloadHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Networking", "DownloadHandler"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T InternalCreateBuffer() {
		return ((T (*)(DownloadHandler*))(Il2CppBase() + 0x4AB9EAC))(this);
	}
	template <typename T = void> T InternalDestroy() {
		return ((T (*)(DownloadHandler*))(Il2CppBase() + 0x4AB9F44))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(DownloadHandler*))(Il2CppBase() + 0x4AB9FDC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DownloadHandler*))(Il2CppBase() + 0x4ABA040))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_data() {
		return ((T (*)(DownloadHandler*))(Il2CppBase() + 0x4ABA064))(this);
	}
	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(DownloadHandler*))(Il2CppBase() + 0x4ABA074))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetData() {
		return ((T (*)(DownloadHandler*))(Il2CppBase() + 0x4ABA084))(this);
	}
	template <typename T = Il2CppString*> T GetText() {
		return ((T (*)(DownloadHandler*))(Il2CppBase() + 0x4ABA08C))(this);
	}

};

}
