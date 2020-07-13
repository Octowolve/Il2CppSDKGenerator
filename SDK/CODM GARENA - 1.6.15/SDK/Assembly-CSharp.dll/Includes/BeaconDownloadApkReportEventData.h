#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BeaconDownloadApkReportEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeaconDownloadApkReportEventData"));
	}

	template <typename T = Il2CppString*> T& BeginTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& TargetVersion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& CurrentVersion() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& GameErrorCode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& ErrorInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& FileSize() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& FinalUrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
