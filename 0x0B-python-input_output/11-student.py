#!/usr/bin/python3
"""Define a student function"""


class Student:
    def __init__(self, first_name, last_name, age):
        """
        Initialize a Student instance.

        Args:
            first_name (str): The first name of the student.
            last_name (str): The last name of the student.
            age (int): The age of the student.
        """
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self, attrs=None):
        """
        Retrieve a dictionary representation of the Student instance.

        Args:
            attrs (list, optional): A list of attribute names
            to include in the dictionary.
                                    If None, include all attributes.

        Returns:
            dict: A dictionary representation of the Student instance.
        """
        if attrs is None:
            return self.__dict__
        return {attr: getattr(self, attr)
                for attr in attrs if hasattr(self, attr)}

    def reload_from_json(self, json):
        """
        Replace all attributes of the Student instance with
        values from a JSON dictionary
        Args:
            json (dict): A dictionary representing the attributes of the
            Student instance.

        Note:
            A dictionary key will be the public attribute name.
            A dictionary value will be the value of the public attribute.
        """
        for key, value in json.items():
            setattr(self, key, value)
