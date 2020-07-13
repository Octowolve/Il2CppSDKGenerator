#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContourRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ContourRange"));
	}

	template <typename T = Il2CppVector2> T& heightRange() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& contourColorMin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& contourColorMax() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& topolineIncludeStart() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& topolineIncludeEnd() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = int32_t> T& numOfTopolinesInBetween() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = unsigned char> T& startTopoLinesWidth() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = unsigned char> T& topoLinesWidth() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = unsigned char> T& EndTopoLinesWidth() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = bool> T& disable() {
		return *(T*)((uintptr_t)this + 0x3B);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
