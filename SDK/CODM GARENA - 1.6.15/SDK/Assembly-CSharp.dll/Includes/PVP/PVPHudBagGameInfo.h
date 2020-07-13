#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPHudBagGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPHudBagGameInfo"));
	}

	template <typename T = int32_t> T& mCountDownTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mIsRequestRespawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& HasSelectBag() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uint64_t> T& m_CountDownBagIDSelect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsHalfwayJoin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& ServerLoginTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& ServerPreparationTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& ClientLoginTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& ClientPreparationTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T set_CountDownTime(int32_t value) {
		return ((T (*)(PVPHudBagGameInfo*, int32_t))(Il2CppBase() + 0x2B08CEC))(this, value);
	}
	template <typename T = int32_t> T get_CountDownTime() {
		return ((T (*)(PVPHudBagGameInfo*))(Il2CppBase() + 0x2B08DD0))(this);
	}
	template <typename T = uint64_t> T get_CountDownBagIDSelect() {
		return ((T (*)(PVPHudBagGameInfo*))(Il2CppBase() + 0x2B08DD8))(this);
	}
	template <typename T = void> T set_CountDownBagIDSelect(uint64_t value) {
		return ((T (*)(PVPHudBagGameInfo*, uint64_t))(Il2CppBase() + 0x2B08DE0))(this, value);
	}
	template <typename T = int32_t> T get_ErroTime() {
		return ((T (*)(PVPHudBagGameInfo*))(Il2CppBase() + 0x2B08EBC))(this);
	}

};

}
