#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cameramask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "camera_mask"));
	}

	template <typename T = int32_t> T& m_rtSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_rt() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_savePath() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_saveMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DumpRenderTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Start() {
		return ((T (*)(cameramask*))(Il2CppBase() + 0x5317B24))(this);
	}
	template <typename T = void> T genRT() {
		return ((T (*)(cameramask*))(Il2CppBase() + 0x5317BBC))(this);
	}
	template <typename T = void> T genMask() {
		return ((T (*)(cameramask*))(Il2CppBase() + 0x5317D64))(this);
	}
	template <typename T = void> T saveMask() {
		return ((T (*)(cameramask*))(Il2CppBase() + 0x5317E58))(this);
	}
	template <typename T = void> static T DumpRenderTexture(uintptr_t rt, Il2CppString* pngOutPath) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x5317F00))(0, rt, pngOutPath);
	}

};

}
