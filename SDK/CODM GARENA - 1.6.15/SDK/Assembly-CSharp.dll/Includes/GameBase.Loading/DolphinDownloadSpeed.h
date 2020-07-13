#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class DolphinDownloadSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "DolphinDownloadSpeed"));
	}

	template <typename T = uint64_t> T& m_sLastTimeSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_fLastTimeRecordSizeTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_strDownloadSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDownLoadSpeedStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDownloadSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSizeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T GetDownLoadSpeedStr() {
		return ((T (*)(DolphinDownloadSpeed*))(Il2CppBase() + 0x2E35DE4))(this);
	}
	template <typename T = Il2CppString*> T GetDownloadSpeed(uint32_t speed) {
		return ((T (*)(DolphinDownloadSpeed*, uint32_t))(Il2CppBase() + 0x2E35FE0))(this, speed);
	}
	template <typename T = Il2CppString*> T GetSizeString(uint32_t size) {
		return ((T (*)(DolphinDownloadSpeed*, uint32_t))(Il2CppBase() + 0x2E360F8))(this, size);
	}

};

}
