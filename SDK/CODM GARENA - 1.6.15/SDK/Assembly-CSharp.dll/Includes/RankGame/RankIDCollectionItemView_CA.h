#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankIDCollectionItemViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankIDCollectionItemView_CA"));
	}

	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& RankWidget() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& TweenParent() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& m_AdaptationView() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector3> T& m_LocalPosition() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_ItemTransform() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_ItemTransform() {
		return ((T (*)(RankIDCollectionItemViewCA*))(Il2CppBase() + 0x380B720))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(RankIDCollectionItemViewCA*))(Il2CppBase() + 0x380B258))(this);
	}
	template <typename T = void> T AdaptationView_1(int32_t inWidth) {
		return ((T (*)(RankIDCollectionItemViewCA*, int32_t))(Il2CppBase() + 0x380B964))(this, inWidth);
	}
	template <typename T = void> T xLuaBaseProxy_AdaptationView(int32_t P0) {
		return ((T (*)(RankIDCollectionItemViewCA*, int32_t))(Il2CppBase() + 0x380BF54))(this, P0);
	}

};

}
