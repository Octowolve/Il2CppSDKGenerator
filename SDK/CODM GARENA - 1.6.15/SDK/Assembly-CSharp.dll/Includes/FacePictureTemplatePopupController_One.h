#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePictureTemplatePopupControllerOne
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePictureTemplatePopupController_One"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreGoBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoBtnClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Switch2UI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Init() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE3D28))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BDD260))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE3E34))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE3F64))(this);
	}
	template <typename T = uintptr_t> T get_facePicConfData() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE407C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(FacePictureTemplatePopupControllerOne*, uintptr_t))(Il2CppBase() + 0x4BE4084))(this, data);
	}
	template <typename T = void> T _OnBtnGoClick() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE41D0))(this);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4294))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4334))(this);
	}
	template <typename T = uintptr_t> T GetReportFlag() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4560))(this);
	}
	template <typename T = void> T OnPreGoBtnClicked() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4600))(this);
	}
	template <typename T = void> T OnGoBtnClickedEvent() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE46C0))(this);
	}
	template <typename T = void> T Switch2UI() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4764))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4A90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4A98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4AA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4AA8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4AB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(FacePictureTemplatePopupControllerOne*))(Il2CppBase() + 0x4BE4AB8))(this);
	}

};

}
