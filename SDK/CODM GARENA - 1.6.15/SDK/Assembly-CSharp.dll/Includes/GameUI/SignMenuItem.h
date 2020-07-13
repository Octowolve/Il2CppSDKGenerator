#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignMenuItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignMenuItem"));
	}

	template <typename T = uintptr_t> T& DescLabelChecked() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& DescLabelUnChecked() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& IconChecked() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& IconUnChecked() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PanelChecked() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& PanelUnChecked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TacticType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDescString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SignMenuItem*))(Il2CppBase() + 0x3C9556C))(this);
	}
	template <typename T = void> T UpdateData(uintptr_t InTacticType) {
		return ((T (*)(SignMenuItem*, uintptr_t))(Il2CppBase() + 0x3C9405C))(this, InTacticType);
	}
	template <typename T = Il2CppString*> T GetDescString() {
		return ((T (*)(SignMenuItem*))(Il2CppBase() + 0x3C95614))(this);
	}
	template <typename T = Il2CppString*> T GetIconName() {
		return ((T (*)(SignMenuItem*))(Il2CppBase() + 0x3C957C4))(this);
	}
	template <typename T = void> T UpdateView(bool IsChecked) {
		return ((T (*)(SignMenuItem*, bool))(Il2CppBase() + 0x3C95130))(this, IsChecked);
	}

};

}
