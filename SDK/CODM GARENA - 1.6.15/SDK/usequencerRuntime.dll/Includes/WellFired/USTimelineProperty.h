#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimelineProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USTimelineProperty"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& propertyList() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_Properties() {
		return ((T (*)(USTimelineProperty*))(Il2CppBase() + 0x486EE6C))(this);
	}
	template <typename T = void> T StartTimeline() {
		return ((T (*)(USTimelineProperty*))(Il2CppBase() + 0x487BEC0))(this);
	}
	template <typename T = bool> T HasPropertiesForComponent(uintptr_t component) {
		return ((T (*)(USTimelineProperty*, uintptr_t))(Il2CppBase() + 0x487BEC4))(this, component);
	}
	template <typename T = uintptr_t> T GetProperty(Il2CppString* propertyName, uintptr_t component) {
		return ((T (*)(USTimelineProperty*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x487C15C))(this, propertyName, component);
	}
	template <typename T = bool> T ContainsProperty(Il2CppString* propertyName, uintptr_t component) {
		return ((T (*)(USTimelineProperty*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x487C588))(this, propertyName, component);
	}
	template <typename T = void> T AddProperty(uintptr_t propertyInfo) {
		return ((T (*)(USTimelineProperty*, uintptr_t))(Il2CppBase() + 0x487C948))(this, propertyInfo);
	}
	template <typename T = void> T RemoveProperty(uintptr_t propertyInfo) {
		return ((T (*)(USTimelineProperty*, uintptr_t))(Il2CppBase() + 0x487CAAC))(this, propertyInfo);
	}
	template <typename T = void> T ClearProperties() {
		return ((T (*)(USTimelineProperty*))(Il2CppBase() + 0x487CB4C))(this);
	}
	template <typename T = void> T SkipTimelineTo(float time) {
		return ((T (*)(USTimelineProperty*, float))(Il2CppBase() + 0x487CBE4))(this, time);
	}
	template <typename T = void> T Process(float sequencerTime, float playbackRate) {
		return ((T (*)(USTimelineProperty*, float, float))(Il2CppBase() + 0x487CBF8))(this, sequencerTime, playbackRate);
	}
	template <typename T = void> T TryToFixComponentReferences() {
		return ((T (*)(USTimelineProperty*))(Il2CppBase() + 0x4875620))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(USTimelineProperty*))(Il2CppBase() + 0x487CF38))(this);
	}
	template <typename T = void> T LateBindAffectedObjectInScene(uintptr_t newAffectedObject) {
		return ((T (*)(USTimelineProperty*, uintptr_t))(Il2CppBase() + 0x487D8F0))(this, newAffectedObject);
	}
	template <typename T = Il2CppString*> T GetJson() {
		return ((T (*)(USTimelineProperty*))(Il2CppBase() + 0x487DC04))(this);
	}

};

}
