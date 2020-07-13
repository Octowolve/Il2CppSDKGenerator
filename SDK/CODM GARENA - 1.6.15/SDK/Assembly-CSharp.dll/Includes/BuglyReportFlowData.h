#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuglyReportFlowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuglyReportFlowData"));
	}

	template <typename T = int32_t> T& eStage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mapId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& foorPrint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T ToBuglyString() {
		return ((T (*)(BuglyReportFlowData*))(Il2CppBase() + 0x3C46A74))(this);
	}

};

}
