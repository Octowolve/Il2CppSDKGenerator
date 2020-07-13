#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingPicConfigureClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingPicConfigureClient"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bNoviceGuide() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bFullScreen() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& bCdn() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = Il2CppString*> T& spritePath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tipList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetData(uintptr_t pData) {
		return ((T (*)(LoadingPicConfigureClient*, uintptr_t))(Il2CppBase() + 0x432DBA4))(this, pData);
	}
	template <typename T = void> T SetData_1(uintptr_t pData) {
		return ((T (*)(LoadingPicConfigureClient*, uintptr_t))(Il2CppBase() + 0x433355C))(this, pData);
	}
	template <typename T = void> T LogData(uintptr_t data) {
		return ((T (*)(LoadingPicConfigureClient*, uintptr_t))(Il2CppBase() + 0x432E874))(this, data);
	}

};

}
