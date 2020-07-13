#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNoticeInstallApkFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnNoticeInstallApkFunc"));
	}


	template <typename T = unsigned char> T Invoke(uintptr_t callback, Il2CppString* url) {
		return ((T (*)(OnNoticeInstallApkFunc*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4990CB0))(this, callback, url);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, Il2CppString* url, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnNoticeInstallApkFunc*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4990D3C))(this, callback, url, _callback, object);
	}
	template <typename T = unsigned char> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnNoticeInstallApkFunc*, uintptr_t))(Il2CppBase() + 0x4990E00))(this, result);
	}

};

}
