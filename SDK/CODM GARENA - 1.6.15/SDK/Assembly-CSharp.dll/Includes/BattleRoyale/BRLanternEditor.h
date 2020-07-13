#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRLanternEditor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRLanternEditor"));
	}

	template <typename T = uintptr_t> T& StartPoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EndPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MinLength() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Interval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MaxRandomAngle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& PosOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& AngleOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LineCurve() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& SortType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CustomArr() {
		return *(T*)((uintptr_t)this + 0x44);
	}


};

}
