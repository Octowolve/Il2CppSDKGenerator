#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRMapMarkStyleSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRMapMarkStyleSet"));
	}

	template <typename T = bool> T& bHasSetName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Zombie() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Boss() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Treasure() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& deafaultFontSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& defaultEffectDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T SetMapMark(uintptr_t mark) {
		return ((T (*)(TacticalBRMapMarkStyleSet*, uintptr_t))(Il2CppBase() + 0x30BEA14))(this, mark);
	}
	template <typename T = void> T UpdateMapMarkLabelSize(Il2CppVector3 size) {
		return ((T (*)(TacticalBRMapMarkStyleSet*, Il2CppVector3))(Il2CppBase() + 0x30BEC1C))(this, size);
	}

};

}
