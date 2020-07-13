#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsAnnouncementView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsAnnouncementView"));
	}

	template <typename T = uintptr_t> T& ContainerPic() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& texture() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteDefault() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BtnGo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SubscribeBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SubscribeLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ContainerWord() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LabelTitle() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LabelContent() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSubscribeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewWord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T InitDefault() {
		return ((T (*)(CodLiveOpsAnnouncementView*))(Il2CppBase() + 0x3532C64))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CodLiveOpsAnnouncementView*))(Il2CppBase() + 0x35341A4))(this);
	}
	template <typename T = void> T UpdateViewPic(uintptr_t announcement) {
		return ((T (*)(CodLiveOpsAnnouncementView*, uintptr_t))(Il2CppBase() + 0x353317C))(this, announcement);
	}
	template <typename T = void> T SetTexture(uintptr_t tex) {
		return ((T (*)(CodLiveOpsAnnouncementView*, uintptr_t))(Il2CppBase() + 0x35335D0))(this, tex);
	}
	template <typename T = void> T UpdateSubscribeInfo(bool bShow, bool bSubscribe) {
		return ((T (*)(CodLiveOpsAnnouncementView*, bool, bool))(Il2CppBase() + 0x3533704))(this, bShow, bSubscribe);
	}
	template <typename T = void> T UpdateViewWord(uintptr_t announcement) {
		return ((T (*)(CodLiveOpsAnnouncementView*, uintptr_t))(Il2CppBase() + 0x3532D64))(this, announcement);
	}

};

}
