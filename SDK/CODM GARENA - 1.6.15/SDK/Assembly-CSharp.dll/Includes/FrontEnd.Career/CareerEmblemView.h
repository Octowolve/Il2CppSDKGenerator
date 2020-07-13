#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class CareerEmblemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "CareerEmblemView"));
	}

	template <typename T = uintptr_t> T& ScorllView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ScrollBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& EmblemIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& EmblemName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& EmblemCount() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& EmblemNameOnIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& EmblemDesc() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& NoEmblemRoot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ShowBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& GetNumLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& gameTypeSelector() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameTagState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowingData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNoEmblem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetEmblemNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetGameTagState() {
		return ((T (*)(CareerEmblemView*))(Il2CppBase() + 0x290586C))(this);
	}
	template <typename T = void> T SetShowingData(uintptr_t data) {
		return ((T (*)(CareerEmblemView*, uintptr_t))(Il2CppBase() + 0x2907304))(this, data);
	}
	template <typename T = void> T SetNoEmblem(bool b) {
		return ((T (*)(CareerEmblemView*, bool))(Il2CppBase() + 0x2907224))(this, b);
	}
	template <typename T = void> T SetGetEmblemNum(int32_t AllNum, int32_t GetNum) {
		return ((T (*)(CareerEmblemView*, int32_t, int32_t))(Il2CppBase() + 0x2907080))(this, AllNum, GetNum);
	}

};

}
