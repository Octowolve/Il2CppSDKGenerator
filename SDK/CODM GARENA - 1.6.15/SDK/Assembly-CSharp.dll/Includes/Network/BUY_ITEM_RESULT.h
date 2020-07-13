#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class BUYITEMRESULT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "BUY_ITEM_RESULT"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eBUY_ITEM_SUCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eBUY_ITEM_MONEY_NOT_ENOUGH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eBUY_ITEM_OTHER_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
