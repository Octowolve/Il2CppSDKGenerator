#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class FrameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "FrameInfo"));
	}

	template <typename T = int32_t> T& FrameId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& RecvTickMS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ValidDataCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DataCollection() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(FrameInfo*))(Il2CppBase() + 0x46AB120))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(FrameInfo*))(Il2CppBase() + 0x46AB500))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t dest) {
		return ((T (*)(FrameInfo*, uintptr_t))(Il2CppBase() + 0x46AB7B0))(this, dest);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(FrameInfo*, uintptr_t))(Il2CppBase() + 0x46ABBCC))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(FrameInfo*, uintptr_t))(Il2CppBase() + 0x46ABCD0))(this, reader);
	}

};

}
