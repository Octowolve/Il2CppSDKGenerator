#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuckyDrawStyle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuckyDrawStyle"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& LuckyDrawNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LuckyValueDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LuckyDrawNoRepeatPriceChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LuckyDrawNoRepeatSamePrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
