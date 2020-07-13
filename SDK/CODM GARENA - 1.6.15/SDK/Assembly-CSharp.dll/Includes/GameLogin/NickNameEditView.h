#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class NickNameEditView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "NickNameEditView"));
	}

	template <typename T = uintptr_t> T& m_ButtonOK() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_ButtonCancel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_ButtonChangeHeadIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_InputName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_Head() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LabelTapToChange() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& tip3() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ChangeRdmNickNameBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultScoialName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRandomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRandomBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHeadIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetDefaultScoialName(Il2CppString* name) {
		return ((T (*)(NickNameEditView*, Il2CppString*))(Il2CppBase() + 0x2529938))(this, name);
	}
	template <typename T = void> T SetRandomName(Il2CppString* randomName) {
		return ((T (*)(NickNameEditView*, Il2CppString*))(Il2CppBase() + 0x252B008))(this, randomName);
	}
	template <typename T = void> T SetRandomBtnState(bool bShow) {
		return ((T (*)(NickNameEditView*, bool))(Il2CppBase() + 0x252C914))(this, bShow);
	}
	template <typename T = void> T SetHeadIcon(int32_t picId, int32_t frameId) {
		return ((T (*)(NickNameEditView*, int32_t, int32_t))(Il2CppBase() + 0x252A640))(this, picId, frameId);
	}

};

}
