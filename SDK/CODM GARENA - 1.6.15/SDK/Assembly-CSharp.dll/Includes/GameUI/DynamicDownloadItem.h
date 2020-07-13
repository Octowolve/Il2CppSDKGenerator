#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DynamicDownloadItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DynamicDownloadItem"));
	}

	template <typename T = uintptr_t> T& QuestName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& objDownload() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& btnDownload() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LabelDownloadTip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LabelCompInitTip() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& BtnDownloadCancel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& objDownloading() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& downloadProgress() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LabelProgress() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& gdc() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& questId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& downloadAction() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& cancelAction() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& CHECK_INTERVAL() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQuestId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQuestName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDownloadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPopWindowCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCancelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindDownloadEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindCancelloadEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenericSetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DynamicSetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGenericProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDynamicProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T SetQuestId(int32_t id) {
		return ((T (*)(DynamicDownloadItem*, int32_t))(Il2CppBase() + 0x46F3968))(this, id);
	}
	template <typename T = void> T SetQuestName(Il2CppString* name) {
		return ((T (*)(DynamicDownloadItem*, Il2CppString*))(Il2CppBase() + 0x46F3CEC))(this, name);
	}
	template <typename T = void> T OnBtnDownloadClick() {
		return ((T (*)(DynamicDownloadItem*))(Il2CppBase() + 0x46F3E0C))(this);
	}
	template <typename T = void> T OnPopWindowCallBack(bool isOk) {
		return ((T (*)(DynamicDownloadItem*, bool))(Il2CppBase() + 0x46F40B8))(this, isOk);
	}
	template <typename T = void> T OnBtnCancelClick() {
		return ((T (*)(DynamicDownloadItem*))(Il2CppBase() + 0x46F4198))(this);
	}
	template <typename T = void> T BindDownloadEvent(void* downloadAction) {
		return ((T (*)(DynamicDownloadItem*, void*))(Il2CppBase() + 0x46F4264))(this, downloadAction);
	}
	template <typename T = void> T BindCancelloadEvent(void* cancelAction) {
		return ((T (*)(DynamicDownloadItem*, void*))(Il2CppBase() + 0x46F430C))(this, cancelAction);
	}
	template <typename T = void> T SetState() {
		return ((T (*)(DynamicDownloadItem*))(Il2CppBase() + 0x46F3BD4))(this);
	}
	template <typename T = void> T GenericSetState() {
		return ((T (*)(DynamicDownloadItem*))(Il2CppBase() + 0x46F43B4))(this);
	}
	template <typename T = void> T DynamicSetState() {
		return ((T (*)(DynamicDownloadItem*))(Il2CppBase() + 0x46F4814))(this);
	}
	template <typename T = void> T SetProgress() {
		return ((T (*)(DynamicDownloadItem*))(Il2CppBase() + 0x46F4AE4))(this);
	}
	template <typename T = void> T SetGenericProgress() {
		return ((T (*)(DynamicDownloadItem*))(Il2CppBase() + 0x46F4BFC))(this);
	}
	template <typename T = void> T SetDynamicProgress() {
		return ((T (*)(DynamicDownloadItem*))(Il2CppBase() + 0x46F5054))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DynamicDownloadItem*))(Il2CppBase() + 0x46F543C))(this);
	}

};

}
