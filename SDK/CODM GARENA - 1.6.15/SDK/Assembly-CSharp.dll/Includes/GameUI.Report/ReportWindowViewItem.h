#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Report {

class ReportWindowViewItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Report", "ReportWindowViewItem"));
	}

	template <typename T = uintptr_t> T& Camp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Sequence() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& DropSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SequeceObj() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetInfo(Il2CppString* camp, int32_t sequence, Il2CppString* name, bool ShowDropSprite, bool ShowSequence) {
		return ((T (*)(ReportWindowViewItem*, Il2CppString*, int32_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x3AC0E58))(this, camp, sequence, name, ShowDropSprite, ShowSequence);
	}

};

}
