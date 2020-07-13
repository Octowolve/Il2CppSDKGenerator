#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class MatchJumpClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "MatchJumpClient"));
	}

	template <typename T = int64_t> T& m_seqId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_GroupId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_BeginDate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& m_EndDate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_ShowLocation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_MatchName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_MatchBGSprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_MatchBGSpriteUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_MatchIconSprite() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_GoPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_SecondTab() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_ThirdTab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_Award() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_ShowItemIdList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int64_t> T get_seqId() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A698))(this);
	}
	template <typename T = int32_t> T get_GroupId() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6A0))(this);
	}
	template <typename T = uint32_t> T get_BeginDate() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6A8))(this);
	}
	template <typename T = uint32_t> T get_EndDate() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6B0))(this);
	}
	template <typename T = int32_t> T get_ShowLocation() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6B8))(this);
	}
	template <typename T = Il2CppString*> T get_MatchName() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6C0))(this);
	}
	template <typename T = Il2CppString*> T get_MatchBGSprite() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6C8))(this);
	}
	template <typename T = Il2CppString*> T get_MatchBGSpriteUrl() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6D0))(this);
	}
	template <typename T = Il2CppString*> T get_MatchIconSprite() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6D8))(this);
	}
	template <typename T = int32_t> T get_GoPos() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6E0))(this);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6E8))(this);
	}
	template <typename T = int32_t> T get_ThirdTab() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6F0))(this);
	}
	template <typename T = uintptr_t> T get_Award() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A6F8))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_ShowItemIdList() {
		return ((T (*)(MatchJumpClient*))(Il2CppBase() + 0x432A700))(this);
	}
	template <typename T = void> T UpdateData(uintptr_t data) {
		return ((T (*)(MatchJumpClient*, uintptr_t))(Il2CppBase() + 0x432A708))(this, data);
	}
	template <typename T = bool> T IsValid(int32_t serverTime) {
		return ((T (*)(MatchJumpClient*, int32_t))(Il2CppBase() + 0x432AE2C))(this, serverTime);
	}

};

}
