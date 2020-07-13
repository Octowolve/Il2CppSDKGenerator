#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class FFASettlementWindowItemViewEN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "FFASettlementWindowItemViewEN"));
	}

	template <typename T = uintptr_t> T& LabelKills() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& LabelDeath() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& LabelScore() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& AdaptCell() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetData(int32_t index, uintptr_t psd, uint64_t matchGuid, uintptr_t gameMode) {
		return ((T (*)(FFASettlementWindowItemViewEN*, int32_t, uintptr_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3B1FCA0))(this, index, psd, matchGuid, gameMode);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t psd, uintptr_t mode) {
		return ((T (*)(FFASettlementWindowItemViewEN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B26FF4))(this, psd, mode);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(FFASettlementWindowItemViewEN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B2757C))(this, P0, P1);
	}

};

}
