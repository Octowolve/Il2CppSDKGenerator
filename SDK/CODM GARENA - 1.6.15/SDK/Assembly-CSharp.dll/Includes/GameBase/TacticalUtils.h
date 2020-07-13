#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalUtils"));
	}

	template <typename T = int32_t> static T& MaxPlayerNumPerTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppString*>*> static T& StrIntCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStringByInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePawnSpriteWhenMatchOB_Radar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePawnSpriteWhenMatchOB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> static T AdjustPlayerIconUI(uintptr_t inSprite, uintptr_t overlapStrategy, int32_t inDepth, uintptr_t inPawn, bool bShowPlayerNum) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x27B0D24))(0, inSprite, overlapStrategy, inDepth, inPawn, bShowPlayerNum);
	}
	template <typename T = void> static T AdjustPlayerIconUI_1(uintptr_t inSprite, uintptr_t overlapStrategy, int32_t inDepth, uintptr_t playerInfo, bool bShowPlayerNum) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x27B11A8))(0, inSprite, overlapStrategy, inDepth, playerInfo, bShowPlayerNum);
	}
	template <typename T = void> static T AdjustPlayerIconUI_2(uintptr_t inSprite, uintptr_t overlapStrategy, int32_t inDepth, uint32_t inNum, bool bShowPlayerNum) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x27B1558))(0, inSprite, overlapStrategy, inDepth, inNum, bShowPlayerNum);
	}
	template <typename T = void> static T AdjustPlayerIconUI_3(uintptr_t inSprite, int32_t inDepth, uint32_t inNum) {
		return ((T (*)(void *, uintptr_t, int32_t, uint32_t))(Il2CppBase() + 0x27B7DE8))(0, inSprite, inDepth, inNum);
	}
	template <typename T = void> static T AdjustPlayerIconUI_4(uintptr_t inSprite, int32_t inDepth, uint32_t inNum, bool bShowPlayerNum) {
		return ((T (*)(void *, uintptr_t, int32_t, uint32_t, bool))(Il2CppBase() + 0x27B7A38))(0, inSprite, inDepth, inNum, bShowPlayerNum);
	}
	template <typename T = Il2CppString*> static T GetStringByInt(uint32_t id) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x27B8184))(0, id);
	}
	template <typename T = void> static T ChangePawnSpriteWhenMatchOB_Radar(uintptr_t inPawn, uintptr_t sprite, uintptr_t show) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27AA444))(0, inPawn, sprite, show);
	}
	template <typename T = void> static T ChangePawnSpriteWhenMatchOB(uintptr_t inPawn, uintptr_t sprite) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x27963BC))(0, inPawn, sprite);
	}

};

}
