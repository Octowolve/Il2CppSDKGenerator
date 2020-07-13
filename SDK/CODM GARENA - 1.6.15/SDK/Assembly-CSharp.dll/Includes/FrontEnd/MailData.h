#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailData"));
	}

	template <typename T = uintptr_t> T& MailType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& Recv_Time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SenderName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AttachDataList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& bReadFlag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& SendPlayerID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& SendOpenID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SenderIcon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& action_type() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& dropTimeStamp() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& mailUrl() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& mailStatus() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& mailActionType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ExpriedDataList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExpriedDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BuildData(uintptr_t mail, uintptr_t serverType) {
		return ((T (*)(MailData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x36BA830))(this, mail, serverType);
	}
	template <typename T = void> T SetExpriedDataList(Il2CppList<uintptr_t>* props) {
		return ((T (*)(MailData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x36BB7C8))(this, props);
	}

};

}
