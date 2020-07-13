#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementKey"));
	}

	template <typename T = Il2CppString*> static T& LocalTriggerDetailTimesKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LocalIsTriggerReportKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LocalTriggerScoreDetailTimesKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
