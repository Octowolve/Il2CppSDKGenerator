#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRMapMarkManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRMapMarkManager"));
	}

	template <typename T = uintptr_t> T& MapMarkSetTemplate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpriteList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_BRGameInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& hasInit() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRMapMarkManager*))(Il2CppBase() + 0x30BD690))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRMapMarkManager*))(Il2CppBase() + 0x30BD844))(this);
	}
	template <typename T = uintptr_t> T CreateSpriteInstance(uintptr_t mapMarkSetTemplate) {
		return ((T (*)(TacticalBRMapMarkManager*, uintptr_t))(Il2CppBase() + 0x30BE828))(this, mapMarkSetTemplate);
	}
	template <typename T = void> T UpdateMapMark() {
		return ((T (*)(TacticalBRMapMarkManager*))(Il2CppBase() + 0x30BE0B0))(this);
	}
	template <typename T = void> T InitMapMark() {
		return ((T (*)(TacticalBRMapMarkManager*))(Il2CppBase() + 0x30BD96C))(this);
	}
	template <typename T = Il2CppVector3> T GetMarkSpriteSize(float size) {
		return ((T (*)(TacticalBRMapMarkManager*, float))(Il2CppBase() + 0x30BEBBC))(this, size);
	}
	template <typename T = void> T UpdateRelativePosition() {
		return ((T (*)(TacticalBRMapMarkManager*))(Il2CppBase() + 0x30BED58))(this);
	}

};

}
